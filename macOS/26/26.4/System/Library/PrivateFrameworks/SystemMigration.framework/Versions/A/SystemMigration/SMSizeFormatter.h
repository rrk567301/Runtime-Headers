@class NSString, NSByteCountFormatter;

@interface SMSizeFormatter : NSFormatter

@property (retain) NSString *formatString;
@property (retain) NSByteCountFormatter *numberFormatter;

- (id)stringForObjectValue:(id)a0;
- (void).cxx_destruct;
- (id)initWithPrefixString:(id)a0 localeIdentifier:(id)a1;

@end
