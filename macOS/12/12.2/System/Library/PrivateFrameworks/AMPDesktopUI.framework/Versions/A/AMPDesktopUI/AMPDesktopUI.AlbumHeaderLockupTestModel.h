@class NSString;

@interface AMPDesktopUI.AlbumHeaderLockupTestModel : NSObject <AMPDesktopUI.AlbumHeaderLockupModel> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ subtitleLinkUUID;
    void /* unknown type, empty encoding */ tertitle;
    void /* unknown type, empty encoding */ tertitleLinkUUID;
    void /* unknown type, empty encoding */ callout;
    void /* unknown type, empty encoding */ itemDescription;
    void /* unknown type, empty encoding */ artworkID;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic) void /* unknown type, empty encoding */ titleIsEditable;
@property (nonatomic) void /* unknown type, empty encoding */ isExplicit;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic) void /* unknown type, empty encoding */ subtitleIsEditable;
@property (nonatomic, copy) NSString *subtitleLinkUUID;
@property (nonatomic, copy) NSString *tertitle;
@property (nonatomic, copy) NSString *tertitleLinkUUID;
@property (nonatomic, copy) NSString *callout;
@property (nonatomic) void /* unknown type, empty encoding */ isDolbyAtmos;
@property (nonatomic) void /* unknown type, empty encoding */ isDigitalMaster;
@property (nonatomic, copy) NSString *itemDescription;
@property (nonatomic) void /* unknown type, empty encoding */ descriptionIsEditable;
@property (nonatomic, copy) NSString *artworkID;
@property (nonatomic) void /* unknown type, empty encoding */ previewMode;
@property (nonatomic) void /* unknown type, empty encoding */ libraryState;

+ (id)generate;
+ (id)availableEnumValuesForLibraryState;

- (id)init;
- (void).cxx_destruct;

@end
