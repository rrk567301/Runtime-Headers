@class NSString, NSMutableDictionary;

@interface APOdmlBiomeEvent : NSObject <BMStoreData>

@property (retain, nonatomic) NSMutableDictionary *outerDictionary;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
