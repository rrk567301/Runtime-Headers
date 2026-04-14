@class NSArray, MediaStream;

@interface MoveSpeakerIntent : INIntent

@property (nonatomic, copy) NSArray *deviceQueries;
@property (nonatomic, copy) NSArray *deviceContext;
@property (nonatomic) long long mediaType;
@property (nonatomic, retain) MediaStream *source;
@property (nonatomic, copy) NSArray *destinations;

+ (BOOL)shouldSkipDefaultSchemaCheck;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;

@end
