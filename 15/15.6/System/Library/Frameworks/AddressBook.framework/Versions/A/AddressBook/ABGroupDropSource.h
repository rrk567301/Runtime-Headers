@class ABRecordContext;

@interface ABGroupDropSource : NSObject

@property (readonly) ABRecordContext *recordContext;
@property (readonly) char isLocalToWindow;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRecordContext:(id)a0 isLocalToWindow:(char)a1;

@end
