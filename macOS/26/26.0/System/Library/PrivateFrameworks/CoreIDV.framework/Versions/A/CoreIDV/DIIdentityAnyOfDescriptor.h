@class NSArray, NSString;

@interface DIIdentityAnyOfDescriptor : NSObject <DIIdentityDocumentDescriptor> {
    NSArray *_descriptors;
}

@property (readonly, nonatomic) NSArray *descriptors;
@property (readonly, nonatomic) NSArray *elements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDescriptors:(id)a0;
- (void).cxx_destruct;
- (void)addElements:(id)a0 withIntentToStore:(id)a1;
- (id)intentToStoreForElement:(id)a0;

@end
