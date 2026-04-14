@class NSArray;

@interface ABDirectoryServicesImageTask : CNTask {
    NSArray *_emailAddresses;
}

- (id)run:(id *)a0;
- (void)dealloc;
- (id)initWithEmailAddresses:(id)a0;

@end
