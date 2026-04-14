@class NSData, NSObject;
@protocol OS_os_activity;

@interface C2MultipeerServerContext : NSObject

@property (retain, nonatomic) NSObject<OS_os_activity> *osActivity;
@property (retain, nonatomic) NSData *chunkData;

- (void).cxx_destruct;
- (id)init;

@end
