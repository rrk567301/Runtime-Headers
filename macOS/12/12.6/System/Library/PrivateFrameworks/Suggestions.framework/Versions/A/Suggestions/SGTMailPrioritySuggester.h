@class NSArray;

@interface SGTMailPrioritySuggester : SGTSuggester

@property (copy) NSArray *mailPriorities;

+ (id)menuPriorityImageForSuggestion:(id)a0;
+ (BOOL)isMailPriorityRepresentedObject:(id)a0;
+ (id)mailPriorityRepresentedObjectForRepresentedObject:(id)a0;
+ (id)priorityImageForSuggestion:(id)a0;
+ (id)prioritiesCategory;
+ (id)representedObjectForMailPriorityRepresentedObject:(id)a0;
+ (id)tokenPriorityImageForSuggestion:(id)a0;

- (void).cxx_destruct;
- (void)setInput:(id)a0;

@end
