@class UIObjectCompat;

@interface DedupeElementCompat : NSObject {
    void /* unknown type, empty encoding */ screenID;
}

@property (nonatomic, readonly) UIObjectCompat *uiObject;
@property (nonatomic) BOOL isDuplicate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUiObject:(id)a0 isDuplicate:(BOOL)a1 screenID:(id)a2;

@end
