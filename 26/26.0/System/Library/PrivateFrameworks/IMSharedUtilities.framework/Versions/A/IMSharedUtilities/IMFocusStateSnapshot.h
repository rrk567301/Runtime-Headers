@class NSSet;

@interface IMFocusStateSnapshot : NSObject

@property (readonly, nonatomic) unsigned long long configurationType;
@property (readonly, nonatomic) NSSet *contactIdentifiers;
@property (readonly, nonatomic) NSSet *handles;

+ (id)_dndContactHandleForAddress:(id)a0;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)matchesConversationWithHandles:(id)a0;
- (BOOL)_overlapsConversationWithHandles:(id)a0;
- (BOOL)matchesConversationWithHandleStrings:(id)a0;

@end
