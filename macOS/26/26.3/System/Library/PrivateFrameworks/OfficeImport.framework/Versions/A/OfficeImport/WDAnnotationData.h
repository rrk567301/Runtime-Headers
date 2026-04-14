@class WDText, NSString, NSDate;

@interface WDAnnotationData : NSObject {
    WDText *mText;
    NSDate *mDate;
    NSString *mOwner;
}

- (id)initWithText:(id)a0;
- (void)setOwner:(id)a0;
- (id)date;
- (id)owner;
- (id)text;
- (void).cxx_destruct;
- (void)setDate:(id)a0;

@end
