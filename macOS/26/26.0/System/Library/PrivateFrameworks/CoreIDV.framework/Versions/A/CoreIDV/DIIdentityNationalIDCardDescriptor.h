@class NSString, NSArray, NSMutableDictionary;

@interface DIIdentityNationalIDCardDescriptor : NSObject <DIIdentityDocumentDescriptor> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_elementsToIntentToStore;
    NSString *_regionCode;
}

@property (copy, nonatomic) NSString *regionCode;
@property (readonly, nonatomic) NSArray *elements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addElements:(id)a0 withIntentToStore:(id)a1;
- (id)intentToStoreForElement:(id)a0;
- (id)elementsToIntentToStore;
- (void)setElementsToIntentToStore:(id)a0;

@end
