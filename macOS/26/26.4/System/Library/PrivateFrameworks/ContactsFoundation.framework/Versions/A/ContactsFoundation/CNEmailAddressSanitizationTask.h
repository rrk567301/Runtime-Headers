@class NSString;

@interface CNEmailAddressSanitizationTask : CNTask {
    NSString *_address;
}

- (id)run:(id *)a0;
- (id)initWithAddress:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)removeMailtoPrefix;

@end
