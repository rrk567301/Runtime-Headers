@class CNCache, NSString;

@interface CNUIMemoizingParentContainerCache : NSObject <CNUIParentContainerCache>

@property (readonly, nonatomic) CNCache *containerByContactIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clear;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)containerForContact:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWitCache:(id)a0;
- (id)parentContainerOfContact:(id)a0;
- (void)setParentContainer:(id)a0 ofContact:(id)a1;
- (void)udpateWithContactFetchResult:(id)a0;

@end
