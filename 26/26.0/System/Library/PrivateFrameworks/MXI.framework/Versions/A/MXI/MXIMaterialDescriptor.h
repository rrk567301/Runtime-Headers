@class NSArray;

@interface MXIMaterialDescriptor : NSObject {
    unsigned long long _count;
}

@property (readonly) NSArray *atlases;

- (void).cxx_destruct;
- (id)initWithAtlasArray:(id)a0;

@end
