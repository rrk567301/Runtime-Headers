@class NSString;

@interface AdminDirectoryService : NSObject {
    unsigned int mDirReference;
    NSString *mNameOfDefaultLocalNode;
    NSString *mNameOfSearchNode;
}

+ (unsigned int)sharedSession;
+ (id)sharedDirectoryService;
+ (id)directoryServiceAtAddress:(id)a0 name:(id)a1 password:(id)a2 port:(long long)a3;
+ (unsigned int)dirReferenceForServiceAtAddress:(id)a0 name:(id)a1 password:(id)a2 port:(long long)a3;

- (void)dealloc;
- (void)finalize;
- (void)open;
- (void)close;
- (unsigned int)session;
- (BOOL)isOpen;
- (id)nameOfDefaultLocalNode;
- (id)nameOfSearchNode;
- (id)nameOfNodeWithName:(struct { unsigned int x0; unsigned int x1; char x2[1]; } *)a0 patternMatch:(int)a1;
- (id)namesOfNodeWithName:(struct { unsigned int x0; unsigned int x1; char x2[1]; } *)a0 patternMatch:(int)a1;
- (id)initWithDirectoryServiceAtAddress:(id)a0 name:(id)a1 password:(id)a2 port:(long long)a3;

@end
