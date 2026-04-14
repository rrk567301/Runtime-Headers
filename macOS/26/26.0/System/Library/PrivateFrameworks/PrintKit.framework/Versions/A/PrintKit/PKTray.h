@class NSDictionary, NSString;

@interface PKTray : NSObject <NSSecureCoding, PKUserCodable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *trayDict;
@property (readonly) BOOL isEmpty;
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
- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)name;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)mediaName;
- (id)initWithString:(id)a0 andMediaSource:(id)a1;
- (id)initWithUserCodableDictionary:(id)a0;
- (id)userCodableDictionary;

@end
