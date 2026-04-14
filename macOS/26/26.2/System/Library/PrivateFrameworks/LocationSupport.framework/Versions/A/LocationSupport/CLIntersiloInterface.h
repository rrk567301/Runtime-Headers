@interface CLIntersiloInterface : NSObject

+ (id)sharedInterface;

- (id)getInfoForSelector:(SEL)a0;
- (BOOL)hasInfoForSelector:(SEL)a0;
- (void)extendSelectorInfoWithProtocol:(id)a0 bases:(id)a1;

@end
