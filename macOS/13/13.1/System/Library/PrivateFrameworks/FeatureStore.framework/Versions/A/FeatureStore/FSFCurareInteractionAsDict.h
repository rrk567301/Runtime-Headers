@class NSString, NSDictionary;

@interface FSFCurareInteractionAsDict : NSObject <FSFCurareInteraction> {
    NSDictionary *_content;
    NSString *_interactionId;
    unsigned int _dataVersion;
}

@property (readonly, nonatomic) NSString *interactionId;
@property (readonly, nonatomic) unsigned int dataVersion;

+ (id)deserialize:(id)a0 dataVersion:(unsigned int)a1 interactionId:(id)a2;

- (void).cxx_destruct;
- (id)serialize;
- (id)json;
- (id)initWithContent:(id)a0 interactionId:(id)a1 dataVersion:(unsigned int)a2;
- (id)initWithData:(id)a0 dataVersion:(unsigned int)a1 interactionId:(id)a2;

@end
