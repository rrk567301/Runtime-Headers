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

- (void)finalize;
- (void)dealloc;
- (void)open;
- (void)close;
- (BOOL)isOpen;
- (unsigned int)session;
- (id)nameOfNodeWithName:(struct { unsigned int x0; unsigned int x1; char x2[1]; } *)a0 patternMatch:(int)a1;
- (id)namesOfNodeWithName:(struct { unsigned int x0; unsigned int x1; char x2[1]; } *)a0 patternMatch:(int)a1;
- (id)nameOfDefaultLocalNode;
- (id)nameOfSearchNode;
- (id)initWithDirectoryServiceAtAddress:(id)a0 name:(id)a1 password:(id)a2 port:(long long)a3;

@end
