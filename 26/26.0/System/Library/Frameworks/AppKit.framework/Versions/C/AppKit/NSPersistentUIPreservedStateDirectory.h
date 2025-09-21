@class NSArray, NSFileHandle, NSDate;

@interface NSPersistentUIPreservedStateDirectory : NSObject <NSSecureCoding> {
    NSArray *_publicWindowDictionaries;
    NSFileHandle *_privateStateFileHandle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, getter=isValid) BOOL valid;
@property (readonly, copy) NSDate *modificationDate;

- (void)invalidate;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithStateDirectory:(id)a0;
- (BOOL)readRecordsIntoArray:(id)a0 includeCarbonWindows:(BOOL)a1 includeCocoaWindows:(BOOL)a2;

@end
