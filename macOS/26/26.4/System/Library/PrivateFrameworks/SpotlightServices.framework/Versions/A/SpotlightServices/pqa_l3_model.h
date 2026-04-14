@class MLModel;

@interface pqa_l3_model : NSObject

@property (readonly, nonatomic) MLModel *model;

+ (void)loadContentsOfURL:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (id)URLOfModelInThisBundle;
+ (void)loadWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (void)predictionFromFeatures:(id)a0 completionHandler:(id /* block */)a1;
- (void)predictionFromFeatures:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)initWithMLModel:(id)a0;
- (id)predictionsFromInputs:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromSparseL1:(double)a0 denseL1:(double)a1 isMailCategoryHighImpact:(double)a2 isMailCategoryPromotions:(double)a3 keywordMatchL1:(double)a4 documentEmbeddingAvailable:(double)a5 has_query_text_embedding:(double)a6 searchToolL2Score:(double)a7 outsideUserSpecificTime:(double)a8 isEventBundle:(double)a9 com_apple_mobilecal_LLMQUIntentRestaurantEvent:(double)a10 com_apple_mobilecal_LLMQUIntentAppointmentEvent:(double)a11 com_apple_mobilemail_LLMQUIntentEvent:(double)a12 com_apple_mobilecal_LLMQUIntentEvent:(double)a13 com_apple_mobilecal_LLMQUIntentFlightEvent:(double)a14 com_apple_MobileSMS_LLMQUIntentAppointmentEvent:(double)a15 com_apple_MobileSMS_LLMQUIntentEvent:(double)a16 com_apple_mobilemail_LLMQUIntentAppointmentEvent:(double)a17 other_bundle_LLMQUIntentHotelEvent:(double)a18 com_apple_MobileSMS_LLMQUIntentTicketShowEvent:(double)a19 com_apple_mobilecal_LLMQUIntentTicketShowEvent:(double)a20 com_apple_MobileSMS_LLMQUIntentRestaurantEvent:(double)a21 other_bundle_LLMQUIntentTicketShowEvent:(double)a22 com_apple_mobilecal_LLMQUIntentHotelEvent:(double)a23 com_apple_mobilemail_LLMQUIntentRestaurantEvent:(double)a24 other_bundle_LLMQUIntentAppointmentEvent:(double)a25 com_apple_mobilemail_LLMQUIntentFlightEvent:(double)a26 other_bundle_LLMQUIntentRestaurantEvent:(double)a27 com_apple_mobilemail_LLMQUIntentTicketShowEvent:(double)a28 other_bundle_LLMQUIntentFlightEvent:(double)a29 other_bundle_LLMQUIntentEvent:(double)a30 com_apple_MobileSMS_LLMQUIntentFlightEvent:(double)a31 com_apple_mobilemail_LLMQUIntentHotelEvent:(double)a32 com_apple_MobileSMS_LLMQUIntentPartyEvent:(double)a33 com_apple_MobileSMS_LLMQUIntentTicketTransportEvent:(double)a34 com_apple_mobilemail_LLMQUIntentTicketTransportEvent:(double)a35 com_apple_mobilemail_LLMQUIntentCarRentalEvent:(double)a36 com_apple_MobileSMS_LLMQUIntentConversation:(double)a37 com_apple_mobilecal_LLMQUIntentPartyEvent:(double)a38 com_apple_mobileslideshow_LLMQUIntentPhone:(double)a39 com_apple_MobileSMS_LLMQUIntentHotelEvent:(double)a40 com_apple_mobileslideshow_LLMQUIntentEvent:(double)a41 other_bundle_LLMQUIntentTicketTransportEvent:(double)a42 com_apple_MobileSMS_LLMQUIntentCarRentalEvent:(double)a43 com_apple_mobilecal_LLMQUIntentTicketTransportEvent:(double)a44 com_apple_mobilecal_LLMQUIntentCarRentalEvent:(double)a45 com_apple_mobilemail_LLMQUIntentConversation:(double)a46 com_apple_mobilemail_LLMQUIntentPartyEvent:(double)a47 com_apple_mobilecal_LLMQUIntentCalendar:(double)a48 com_apple_mobileslideshow_LLMQUIntentWallet:(double)a49 com_apple_mobileslideshow_LLMQUIntentPhoto:(double)a50 com_apple_MobileSMS_LLMQUIntentCalendar:(double)a51 com_apple_MobileSMS_LLMQUIntentContact:(double)a52 com_apple_mobilemail_LLMQUIntentCalendar:(double)a53 com_apple_mobilecal_LLMQUIntentContact:(double)a54 com_apple_MobileSMS_LLMQUIntentWallet:(double)a55 com_apple_mobilemail_LLMQUIntentWallet:(double)a56 com_apple_mobilemail_LLMQUIntentContact:(double)a57 com_apple_MobileSMS_LLMQUIntentPhoto:(double)a58 other_bundle_LLMQUIntentContact:(double)a59 com_apple_mobilemail_LLMQUIntentPhoto:(double)a60 other_bundle_LLMQUIntentWallet:(double)a61 other_bundle_LLMQUIntentPhoto:(double)a62 other_bundle_LLMQUIntentCalendar:(double)a63 com_apple_mobilecal_LLMQUIntentWallet:(double)a64 com_apple_mobilecal_LLMQUIntentPhoto:(double)a65 com_apple_mobilemail_LLMQUIntentSharedLink:(double)a66 com_apple_MobileSMS_LLMQUIntentSharedLink:(double)a67 com_apple_mobilemail_LLMQUIntentSafari:(double)a68 com_apple_mobilecal_LLMQUIntentSharedLink:(double)a69 error:(id *)a70;

@end
