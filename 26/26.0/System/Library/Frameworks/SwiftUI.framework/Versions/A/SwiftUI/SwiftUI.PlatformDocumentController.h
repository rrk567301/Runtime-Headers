@class NSArray, NSString;

@interface SwiftUI.PlatformDocumentController : NSDocumentController {
    void /* unknown type, empty encoding */ documentClasses;
    void /* unknown type, empty encoding */ classID;
}

@property (nonatomic, readonly) NSArray *documentClassNames;
@property (nonatomic, readonly) NSString *defaultType;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_supportsAppCentricBrowsing;

@end
