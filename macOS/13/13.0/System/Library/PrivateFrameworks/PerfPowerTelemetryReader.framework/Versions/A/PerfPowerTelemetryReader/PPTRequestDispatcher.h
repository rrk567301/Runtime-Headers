@class NSString;

@interface PPTRequestDispatcher : NSObject <PPTDataReaderProtocol>

@property (copy, nonatomic) NSString *metadataFilepath;
@property (copy, nonatomic) NSString *storageFilepath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
