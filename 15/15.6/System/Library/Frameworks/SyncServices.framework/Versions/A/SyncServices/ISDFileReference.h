@class NSString, NSData, NSDate;

@interface ISDFileReference : ISDDataObject <NSCoding> {
    NSString *_persistentId;
    NSString *_path;
    NSDate *_timestamp;
    NSData *_aliasData;
    NSString *_bundleId;
    NSString *_bundleRelativePath;
    NSString *_windowsBinRelativePath;
}

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)path;
- (id)timestamp;
- (id)initWithPath:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)bundleId;
- (id)persistentId;
- (void)updateTimestamp;
- (id)aliasData;
- (id)bundleRelativePath;
- (char)fileHasBeenModified;
- (id)initWithPath:(id)a0 bundleId:(id)a1 bundleRelativePath:(id)a2;
- (id)initWithPath:(id)a0 bundleId:(id)a1 bundleRelativePath:(id)a2 windowsBinRelativePath:(id)a3;
- (char)refersToFileAtPath:(id)a0;
- (char)validateFileReference;
- (id)windowsBinRelativePath;

@end
