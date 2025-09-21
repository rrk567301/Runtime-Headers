@class NSDictionary, NSString, NSMutableDictionary;

@interface _CurareInternalBiomeFeature : NSObject <FSFFeature, BMStoreData> {
    NSMutableDictionary *_content;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDictionary *content;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (id)json;
- (id)serialize;
- (void).cxx_destruct;
- (id)interactionId;
- (id)initWithCurareInteraction:(id)a0;

@end
