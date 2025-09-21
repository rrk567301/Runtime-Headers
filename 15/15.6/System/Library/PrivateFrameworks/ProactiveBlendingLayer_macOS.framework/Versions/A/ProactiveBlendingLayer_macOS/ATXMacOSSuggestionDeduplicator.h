@class NSString;

@interface ATXMacOSSuggestionDeduplicator : NSObject <ATXUniversalSuggestionDeduplicatorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)executableClassStringsToUnarchiveDuringComparison;
- (char)executableSpecsAreDuplicates:(id)a0 otherExecutableSpec:(id)a1;
- (char)suggestionIsDuplicate:(id)a0 existingSuggestions:(id)a1;

@end
