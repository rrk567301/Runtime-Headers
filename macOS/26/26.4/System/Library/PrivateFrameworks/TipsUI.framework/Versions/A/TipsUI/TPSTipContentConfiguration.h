@class NSString, NSArray;

@interface TPSTipContentConfiguration : NSObject {
    void /* unknown type, empty encoding */ _title;
    void /* unknown type, empty encoding */ _collectionIds;
    void /* unknown type, empty encoding */ _tipIds;
    void /* unknown type, empty encoding */ _bundleId;
    void /* unknown type, empty encoding */ _version;
    void /* unknown type, empty encoding */ _displayAsSheet;
    void /* unknown type, empty encoding */ _displayToolbars;
    void /* unknown type, empty encoding */ _dismissActionHandler;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *collectionIds;
@property (nonatomic, copy) NSArray *tipIds;
@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, copy) NSString *version;
@property (nonatomic) BOOL displayAsSheet;
@property (nonatomic) BOOL displayToolbars;
@property (nonatomic, copy) id /* block */ dismissActionHandler;

+ (BOOL)containsAnyTips:(id)a0;
+ (BOOL)containsAnyCollections:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTitle:(id)a0 collectionIds:(id)a1 tipIds:(id)a2 bundleId:(id)a3 version:(id)a4 displayAsSheet:(BOOL)a5 displayToolbars:(BOOL)a6 dismissActionHandler:(id /* block */)a7;

@end
