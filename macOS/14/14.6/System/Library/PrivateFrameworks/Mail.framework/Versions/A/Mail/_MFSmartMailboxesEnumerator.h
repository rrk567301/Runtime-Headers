@class NSArray, NSEnumerator;

@interface _MFSmartMailboxesEnumerator : NSEnumerator

@property (readonly, copy, nonatomic) NSArray *smartMailboxes;
@property (nonatomic) unsigned long long nextMailboxIndex;
@property (retain, nonatomic) NSEnumerator *currentMailboxEnumerator;

- (id)init;
- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithSmartMailboxes:(id)a0;

@end
