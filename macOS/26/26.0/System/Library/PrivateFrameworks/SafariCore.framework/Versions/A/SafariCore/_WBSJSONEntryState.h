@class NSMutableSet;

@interface _WBSJSONEntryState : NSObject {
    NSMutableSet *_encodedKeys;
}

@property (readonly, nonatomic) long long kind;
@property (readonly, nonatomic) unsigned long long numberOfEntries;

- (BOOL)containsKey:(id)a0;
- (void)addKey:(id)a0;
- (id)initWithKind:(long long)a0;
- (void).cxx_destruct;
- (void)addEntry;

@end
