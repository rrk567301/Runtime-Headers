@class NSDictionary, NSString;

@interface OSAGPUEventReport : OSAReport {
    NSDictionary *_event;
    NSString *_tailspinPath;
}

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)problemType;
- (id)appleCareDetails;
- (id)reportNamePrefix;
- (void)generateLogAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;

@end
