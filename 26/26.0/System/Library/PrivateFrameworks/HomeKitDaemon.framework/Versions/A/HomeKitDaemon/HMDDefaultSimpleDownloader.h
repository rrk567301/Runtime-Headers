@class NSString;

@interface HMDDefaultSimpleDownloader : NSObject <HMFLogging, HMDSimpleDownloader> {
    NSString *_identifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
