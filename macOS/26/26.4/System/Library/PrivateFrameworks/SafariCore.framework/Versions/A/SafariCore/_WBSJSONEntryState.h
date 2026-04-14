@class NSMutableSet;

@interface _WBSJSONEntryState : NSObject {
    NSMutableSet *_encodedKeys;
}

@property (readonly, nonatomic) long long kind;
@property (readonly, nonatomic) unsigned long long numberOfEntries;

- (void)addKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithKind:(long long)a0;
- (BOOL)containsKey:(id)a0;
- (void)addEntry;

@end
