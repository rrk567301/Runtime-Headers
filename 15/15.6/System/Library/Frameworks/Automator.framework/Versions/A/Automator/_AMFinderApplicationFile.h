@interface _AMFinderApplicationFile : _AMFinderFile

@property (readonly) long long suggestedSize;
@property long long minimumSize;
@property long long preferredSize;
@property (readonly) char acceptsHighLevelEvents;
@property (readonly) char hasScriptingTerminology;
@property char opensInClassic;

- (id)id;

@end
