@class WDText, NSString, NSDate;

@interface WDAnnotationData : NSObject {
    WDText *mText;
    NSDate *mDate;
    NSString *mOwner;
}

- (void)setOwner:(id)a0;
- (void)setDate:(id)a0;
- (id)date;
- (id)owner;
- (id)text;
- (id)initWithText:(id)a0;
- (void).cxx_destruct;

@end
