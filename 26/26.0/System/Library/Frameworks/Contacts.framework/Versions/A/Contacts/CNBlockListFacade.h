@class NSString;

@interface CNBlockListFacade : NSObject <CNHandleBlocking>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void *)newItemWithHandle:(id)a0;

- (BOOL)isHandleBlocked:(id)a0;
- (void)setBlocked:(BOOL)a0 forHandle:(id)a1;

@end
