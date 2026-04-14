@class WDText, NSString, NSDate;

@interface WDAnnotationData : NSObject {
    WDText *mText;
    NSDate *mDate;
    NSString *mOwner;
}

- (id)initWithText:(id)a0;
- (void)setOwner:(id)a0;
- (id)date;
- (id)text;
- (void)setDate:(id)a0;
- (id)owner;
- (void).cxx_destruct;

@end
