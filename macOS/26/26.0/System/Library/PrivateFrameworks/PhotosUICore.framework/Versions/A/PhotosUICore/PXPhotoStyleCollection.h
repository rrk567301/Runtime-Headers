@class NSString, NSArray;

@interface PXPhotoStyleCollection : NSObject {
    void /* unknown type, empty encoding */ id;
    void /* function */ name;
    void /* function */ elements;
    void /* unknown type, empty encoding */ _selectedIndex;
    void /* unknown type, empty encoding */ observable;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, copy) NSArray *elements;
@property (nonatomic, readonly) NSString *description;

+ (id)macStyleCollections;

- (id)init;
- (void).cxx_destruct;

@end
