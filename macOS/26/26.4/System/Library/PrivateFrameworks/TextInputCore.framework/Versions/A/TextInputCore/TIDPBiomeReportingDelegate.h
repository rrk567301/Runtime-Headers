@class NSString, BMSource;

@interface TIDPBiomeReportingDelegate : NSObject <TIDPReportingDelegate> {
    BMSource *_source;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (BOOL)record:(id)a0;

@end
