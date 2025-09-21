@class NSDictionary, NSString;

@interface PKTray : NSObject <NSSecureCoding, PKUserCodable>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSDictionary *trayDict;
@property (readonly) char isEmpty;
@property (readonly) NSString *name;
@property (readonly) NSString *localizedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filter:(id)a0 withBlock:(id /* block */)a1;
+ (id)trayWithString:(id)a0 andMediaSource:(id)a1;
+ (id)traysWithMediaSourceSupported:(id)a0 printerInputTrays:(id)a1;

- (void)dealloc;
- (char)isEqual:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (char)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)mediaName;
- (id)initWithString:(id)a0 andMediaSource:(id)a1;
- (id)initWithUserCodableDictionary:(id)a0;
- (id)userCodableDictionary;

@end
