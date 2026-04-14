@class NSString, NSURL, NSDate;

@interface GSSyncedDirectoryVersion : NSObject {
    void /* unknown type, empty encoding */ version;
}

@property (nonatomic, readonly) BOOL isLocal;
@property (nonatomic, readonly) NSString *localizedNameOfSavingComputer;
@property (nonatomic, readonly) NSDate *modifiedDate;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSString *description;

- (id)initWithVersion:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
