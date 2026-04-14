@class NSString, PLPhotoLibraryIdentifier, PLPhotoLibrarySearchCriteria;

@interface PHPhotoLibraryIdentifier : NSObject <NSSecureCoding, NSCopying> {
    NSString *_uuid;
    NSString *_containerIdentifier;
    long long _domain;
}

@property (class, readonly, copy) NSString *defaultApplicationContainerIdentifier;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) PLPhotoLibraryIdentifier *pl_libraryIdentifier;
@property (readonly, copy) PLPhotoLibrarySearchCriteria *librarySearchCriteria;
@property (readonly, nonatomic) NSString *archivalStringRepresentation;
@property (readonly) NSString *uuid;
@property (readonly) NSString *containerIdentifier;
@property (readonly) long long domain;
@property (readonly) NSString *bundleIdentifier;

+ (id)defaultApplicationLibraryIdentifierWithContainerIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)redactedDescription;
- (id)initWithCoder:(id)a0;
- (id)initWithArchivalStringRepresentation:(id)a0;
- (id)initWithPLLibraryIdentifier:(id)a0;

@end
