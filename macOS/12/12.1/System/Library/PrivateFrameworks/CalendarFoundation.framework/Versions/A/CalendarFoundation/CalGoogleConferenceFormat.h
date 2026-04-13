@interface CalGoogleConferenceFormat : NSObject <CalConferencePersistenceFormat>

+ (id)calConferenceSerializationHandle;
+ (id)_delimiterRegex;

- (BOOL)supportsSerializingConferenceWithSource:(unsigned long long)a0;
- (id)serializeConference:(id)a0 serializationBlockTitle:(id)a1;
- (id)deserializeConferences:(id)a0;

@end
