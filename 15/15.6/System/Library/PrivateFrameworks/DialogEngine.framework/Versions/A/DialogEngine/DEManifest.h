@class NSString, NSDictionary, NSData, NSURL;

@interface DEManifest : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *contents;
@property (retain, nonatomic) NSData *summary;
@property (retain, nonatomic) NSData *version;
@property (retain, nonatomic) NSData *keyVersion;
@property (nonatomic) unsigned long long dirDownloadType;
@property (retain, nonatomic) NSURL *publicationURL;
@property (retain, nonatomic) NSURL *downloadURLPrefix;
@property (nonatomic) char testOnly;

+ (id)anyManifestWithContentsOfURL:(id)a0 encrypted:(char)a1;
+ (id)anyManifestWithContentsOfURL:(id)a0 wasEncrypted:(char *)a1;
+ (id)manifestWithContentsOfURL:(id)a0;
+ (id)manifestWithContentsOfURL:(id)a0 encrypted:(char)a1;
+ (id)manifestWithContentsOfURL:(id)a0 encrypted:(char)a1 allowAllKeys:(char)a2 filter:(id)a3;
+ (id)manifestWithContentsOfURL:(id)a0 encrypted:(char)a1 filter:(id)a2;
+ (id)manifestWithContentsOfURL:(id)a0 wasEncrypted:(char *)a1 allowAllKeys:(char)a2 filter:(id)a3;
+ (id)manifestWithContentsOfURL:(id)a0 wasEncrypted:(char *)a1 filter:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (char)writeToURL:(id)a0;
- (id)initWithName:(id)a0 contents:(id)a1 summary:(id)a2 dirDownloadType:(unsigned long long)a3;
- (id)initWithName:(id)a0 contents:(id)a1 summary:(id)a2 dirDownloadType:(unsigned long long)a3 version:(id)a4 keyVersion:(id)a5;
- (char)writeToURL:(id)a0 keyId:(unsigned long long)a1 privateKey:(id)a2;

@end
