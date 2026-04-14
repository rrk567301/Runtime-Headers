@class WDText, NSString, NSDate;

@interface WDAnnotationData : NSObject {
    WDText *mText;
    NSDate *mDate;
    NSString *mOwner;
}

- (id)owner;
- (void)setDate:(id)a0;
- (id)initWithText:(id)a0;
- (void)setOwner:(id)a0;
- (void).cxx_destruct;
- (id)date;
- (id)text;

@end
