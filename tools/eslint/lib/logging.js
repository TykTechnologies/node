/**
 * @fileoverview Handle logging for ESLint
 * @author Gyandeep Singh
 */

"use strict";

/* eslint no-console: "off" */

/* istanbul ignore next */
module.exports = {

    /**
     * Cover for console.log
     * @returns {void}
     */
    info: function() {
        console.log.apply(console, Array.prototype.slice.call(arguments));
    },

    /**
     * Cover for console.error
     * @returns {void}
     */
    error: function() {
        console.error.apply(console, Array.prototype.slice.call(arguments));
    }
};
