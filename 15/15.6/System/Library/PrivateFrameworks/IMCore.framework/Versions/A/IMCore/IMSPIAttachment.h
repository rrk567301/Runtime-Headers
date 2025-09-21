@class NSString, NSDictionary, NSURL, NSDate;

@interface IMSPIAttachment : NSObject

@property (retain) NSString *guid;
@property (retain) NSURL *fileUrl;
@property long long fileTransferState;
@property (retain) NSString *uti;
@property char isSticker;
@property char isOutgoing;
@property (retain) NSDictionary *attributionInfo;
@property (readonly) NSDictionary *stickerUserInfo;
@property (readonly) NSDate *creationDate;
@property (readonly) char isAdaptiveImageGlyph;
@property (readonly) NSString *adaptiveImageGlyphContentIdentifier;
@property (readonly) NSString *adaptiveImageGlyphContentDescription;

- (id)description;
- (void).cxx_destruct;
- (id)bundleID;
- (id)initWithGuid:(id)a0 fileUrl:(id)a1 transferState:(long long)a2 uti:(id)a3 isSticker:(char)a4 isOutgoing:(char)a5 stickerUserInfo:(id)a6 attributionInfo:(id)a7 creationDate:(id)a8 adaptiveImageGlyphContentIdentifier:(id)a9 adaptiveImageGlyphContentDescription:(id)a10;

@end
