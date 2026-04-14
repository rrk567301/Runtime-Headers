@class NSArray, NSEnumerator;

@interface _MFSmartMailboxesEnumerator : NSEnumerator

@property (readonly, copy, nonatomic) NSArray *smartMailboxes;
@property (nonatomic) unsigned long long nextMailboxIndex;
@property (retain, nonatomic) NSEnumerator *currentMailboxEnumerator;

- (id)init;
- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithSmartMailboxes:(id)a0;

@end
