@class OADDrawable;

@interface WDStory : NSObject {
    OADDrawable *mHead;
    BOOL mOle;
}

- (void).cxx_destruct;
- (id)head;
- (id)text;
- (void)setOle:(BOOL)a0;
- (id)initWithHead:(id)a0;
- (BOOL)isOle;

@end
