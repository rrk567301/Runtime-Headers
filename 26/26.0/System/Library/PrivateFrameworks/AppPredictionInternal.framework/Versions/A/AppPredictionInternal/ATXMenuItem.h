@class NSString, NSArray;

@interface ATXMenuItem : NSObject {
    void /* function */ bundleID;
    void /* function */ identifier;
    void /* function */ localizedTitle;
    void /* function */ standaloneTitle;
    void /* function */ menuHierarchyComponents;
    void /* unknown type, empty encoding */ $__lazy_storage_$_identifierForIndexing;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSString *standaloneTitle;
@property (nonatomic, readonly) NSArray *menuHierarchyComponents;
@property (nonatomic, readonly) NSArray *fullMenuPath;
@property (nonatomic, readonly) NSString *fullMenuPathString;
@property (nonatomic, copy) NSString *identifierForIndexing;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

+ (id)fullMenuPathStringFromMenuPathWithMenuPath:(id)a0;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0 identifier:(id)a1 localizedTitle:(id)a2 standaloneTitle:(id)a3 menuHierarchyComponents:(id)a4;

@end
