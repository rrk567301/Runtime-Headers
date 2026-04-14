@class NSISO8601DateFormatter;

@interface MDDateFormatter : NSObject {
    NSISO8601DateFormatter *_formatter;
}

- (void).cxx_destruct;
- (id)init;
- (id)iso8601StringPlusPrecisionForDate:(id)a0 isAllDay:(BOOL)a1;

@end
