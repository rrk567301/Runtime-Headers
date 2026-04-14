@class ABRecordContext;

@interface ABGroupDropSource : NSObject

@property (readonly) ABRecordContext *recordContext;
@property (readonly) BOOL isLocalToWindow;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRecordContext:(id)a0 isLocalToWindow:(BOOL)a1;

@end
