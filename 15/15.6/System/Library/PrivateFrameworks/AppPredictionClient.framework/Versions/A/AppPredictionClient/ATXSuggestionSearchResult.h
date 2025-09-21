@class NSUUID, ATXContextActionIdentifier, ATXProactiveSuggestion;

@interface ATXSuggestionSearchResult : SFSearchResult <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) ATXProactiveSuggestion *proactiveSuggestion;
@property (readonly, nonatomic) NSUUID *blendingModelUICacheUpdateUUID;
@property (readonly, nonatomic) ATXContextActionIdentifier *contextActionIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setBlendingModelUICacheUpdateUUID:(id)a0;
- (void)setContextActionIdentifier:(id)a0;
- (void)setProactiveSuggestion:(id)a0;

@end
