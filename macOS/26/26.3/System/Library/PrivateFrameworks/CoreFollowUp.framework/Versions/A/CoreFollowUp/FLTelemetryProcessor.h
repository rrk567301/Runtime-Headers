@class NSObject;
@protocol FLTelemetryController;

@interface FLTelemetryProcessor : NSObject {
    NSObject<FLTelemetryController> *_telemetryController;
}

- (id)initWithController:(id)a0;
- (void)processCurrentItems:(id)a0;
- (void)processItemRemoval:(id)a0;
- (void).cxx_destruct;
- (void)processItemAddition:(id)a0;

@end
