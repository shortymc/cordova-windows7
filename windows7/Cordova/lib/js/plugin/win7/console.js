var exec = require('cordova/exec');

function logLevel(level, args) {
	var msg = args[0];
	if(typeof msg === 'object')
		msg = JSON.stringify(msg);
	exec(null, null, "Console", "logLevel", [level, msg]);
}

var console = {
    log: function() {
		logLevel('LOG', arguments);
	},
    debug: function() {
		logLevel('DEBUG', arguments);
	},
    trace: function() {
		logLevel('TRACE', arguments);
	},
    info: function() {
		logLevel('INFO', arguments);
	},
    warn: function() {
		logLevel('WARN', arguments);
	},
    error: function() {
		logLevel('ERROR', arguments);
	},
    fatal: function() {
		logLevel('FATAL', arguments);
	}
};

module.exports = console;