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

- (id)initWithPath:(id)a0;
- (id)path;
- (id)bundleId;
- (void)updateTimestamp;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)timestamp;
- (BOOL)isEqual:(id)a0;
- (id)persistentId;
- (id)aliasData;
- (id)bundleRelativePath;
- (BOOL)fileHasBeenModified;
- (id)initWithPath:(id)a0 bundleId:(id)a1 bundleRelativePath:(id)a2;
- (id)initWithPath:(id)a0 bundleId:(id)a1 bundleRelativePath:(id)a2 windowsBinRelativePath:(id)a3;
- (BOOL)refersToFileAtPath:(id)a0;
- (BOOL)validateFileReference;
- (id)windowsBinRelativePath;

@end
