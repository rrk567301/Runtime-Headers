@class NSEnumerator, PKiCloudPrinter, NSString, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface PKCloudResolveContext : NSObject {
    id /* block */ _completionHandler;
}

@property (retain) PKiCloudPrinter *icloudPrinter;
@property (retain) NSEnumerator *enumerator;
@property (retain) NSDate *startTime;
@property (retain) NSString *tag;
@property double timeout;
@property (retain) NSObject<OS_dispatch_queue> *queue;

- (void)start;
- (id)description;
- (void)_complete:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_checkFound:(id)a0;
- (void)_driveResolution;
- (id)initWithPKCloudPrinter:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;

@end
