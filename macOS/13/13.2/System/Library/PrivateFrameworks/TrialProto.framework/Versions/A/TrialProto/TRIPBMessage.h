@class TRIPBUnknownFieldSet, NSMutableDictionary, TRIPBFieldDescriptor, TRIPBExtensionDescriptor;

@interface TRIPBMessage : NSObject <NSSecureCoding, NSCopying> {
    TRIPBUnknownFieldSet *unknownFields_;
    NSMutableDictionary *extensionMap_;
    NSMutableDictionary *autocreatedExtensionMap_;
    TRIPBMessage *autocreator_;
    TRIPBFieldDescriptor *autocreatorField_;
    TRIPBExtensionDescriptor *autocreatorExtension_;
    _Atomic id readOnlySemaphore_;
    struct TRIPBMessage_Storage { unsigned int x0[0]; } *messageStorage_;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) TRIPBUnknownFieldSet *unknownFields;
@property (readonly, nonatomic, getter=isInitialized) BOOL initialized;

+ (void)initialize;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)resolveInstanceMethod:(SEL)a0;
+ (BOOL)resolveClassMethod:(SEL)a0;
+ (id)message;
+ (id)descriptor;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)parseFromData:(id)a0 error:(id *)a1;
+ (id)parseFromData:(id)a0 extensionRegistry:(id)a1 error:(id *)a2;
+ (id)parseFromCodedInputStream:(id)a0 extensionRegistry:(id)a1 error:(id *)a2;
+ (id)parseDelimitedFromCodedInputStream:(id)a0 extensionRegistry:(id)a1 error:(id *)a2;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)data;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptor;
- (void)clear;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithData:(id)a0 extensionRegistry:(id)a1 error:(id *)a2;
- (id)initWithCodedInputStream:(id)a0 extensionRegistry:(id)a1 error:(id *)a2;
- (void)copyFieldsInto:(id)a0 zone:(struct _NSZone { } *)a1 descriptor:(id)a2;
- (void)internalClear:(BOOL)a0;
- (id)delimitedData;
- (void)writeToOutputStream:(id)a0;
- (void)writeToCodedOutputStream:(id)a0;
- (void)writeDelimitedToOutputStream:(id)a0;
- (void)writeDelimitedToCodedOutputStream:(id)a0;
- (void)writeField:(id)a0 toCodedOutputStream:(id)a1;
- (id)getExtension:(id)a0;
- (id)getExistingExtension:(id)a0;
- (BOOL)hasExtension:(id)a0;
- (id)extensionsCurrentlySet;
- (void)writeExtensionsToCodedOutputStream:(id)a0 range:(struct TRIPBExtensionRange { unsigned int x0; unsigned int x1; })a1;
- (void)setExtension:(id)a0 value:(id)a1;
- (void)addExtension:(id)a0 value:(id)a1;
- (void)setExtension:(id)a0 index:(unsigned long long)a1 value:(id)a2;
- (void)clearExtension:(id)a0;
- (void)mergeFromData:(id)a0 extensionRegistry:(id)a1;
- (void)mergeDelimitedFromCodedInputStream:(id)a0 extensionRegistry:(id)a1;
- (void)parseMessageSet:(id)a0 extensionRegistry:(id)a1;
- (BOOL)parseUnknownField:(id)a0 extensionRegistry:(id)a1 tag:(unsigned int)a2;
- (void)addUnknownMapEntry:(int)a0 value:(id)a1;
- (void)mergeFromCodedInputStream:(id)a0 extensionRegistry:(id)a1;
- (unsigned long long)serializedSize;

@end
